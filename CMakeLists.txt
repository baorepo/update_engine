cmake_minimum_required(VERSION 3.7.2)
project (update_engine)

if(CMAKE_TOOLCHAIN_FILE)
set(LIBRARY_OUTPUT_PATH_ROOT ${CMAKE_BINARY_DIR} CACHE PATH "root for library output, set this to change where android libs are compiled to")
# get absolute path, but get_filename_component ABSOLUTE only refer with source dir, so find_file here :(
get_filename_component(CMAKE_TOOLCHAIN_FILE_NAME ${CMAKE_TOOLCHAIN_FILE} NAME)
find_file(CMAKE_TOOLCHAIN_FILE ${CMAKE_TOOLCHAIN_FILE_NAME} PATHS ${CMAKE_SOURCE_DIR} NO_DEFAULT_PATH)
message(STATUS "CMAKE_TOOLCHAIN_FILE = ${CMAKE_TOOLCHAIN_FILE}")
endif()

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS}
                    -ffunction-sections \
                    -Wall \
                    -Wextra \
                    -Werror \
                    -Wno-unused-parameter")
                    
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} \
                    -std=gnu++14 \
                    -fno-strict-aliasing \
                    -Woverloaded-virtual \
                    -Wnon-virtual-dtor \
                    -fPIE -fPIC \
                    ")
set(LINKER_FLAGS "-Wl,--gc-sections")

find_package(PkgConfig REQUIRED) 
pkg_search_module(BASE  libbrillo-395517 libbrillo-glib-395517 libbrillo-test-395517 libchrome-395517 protobuf-lite protobuf xz-embedded curl ssl)

add_definitions(-D_FILE_OFFSET_BITS=64 
                -DNDEBUG -D__CHROMEOS__  
                -D_POSIX_C_SOURCE=199309L 
                -DUSE_BINDER=0 
                -DUSE_DBUS=1 
                -DUSE_FEC=0 
                -DUSE_HWID_OVERRIDE=0
                -DUSE_CHROME_KIOSK_APP=1
                -DDUSE_CHROME_NETWORK_PROXY=1
                -DUSE_MTD=0
                -DUSE_OMAHA=1
                -DUSE_SHILL=0
                -DBASE_VER=395517
                -D_LARGEFILE_SOURCE 
                -D_LARGEFILE64_SOURCE )


#message(${CHROME_INCLUDE_DIRS})
            

add_library(payload_consumer STATIC
                update_metadata.pb.cc
                common/action_processor.cc
                common/boot_control_stub.cc
                common/clock.cc
                common/constants.cc
                common/cpu_limiter.cc
                common/error_code_utils.cc
                common/hash_calculator.cc
                common/http_common.cc
                common/http_fetcher.cc
                common/hwid_override.cc
                common/multi_range_http_fetcher.cc
                common/platform_constants_slinux.cc
                common/prefs.cc
                common/subprocess.cc
                common/terminator.cc
                common/utils.cc
                payload_consumer/bzip_extent_writer.cc
                payload_consumer/cached_file_descriptor.cc
                payload_consumer/delta_performer.cc
                payload_consumer/download_action.cc
                payload_consumer/extent_reader.cc
                payload_consumer/extent_writer.cc
                payload_consumer/file_descriptor.cc
                payload_consumer/file_descriptor_utils.cc
                payload_consumer/file_writer.cc
                payload_consumer/filesystem_verifier_action.cc
                payload_consumer/install_plan.cc
                payload_consumer/mount_history.cc
                payload_consumer/payload_constants.cc
                payload_consumer/payload_metadata.cc
                payload_consumer/payload_verifier.cc
                payload_consumer/postinstall_runner_action.cc
                payload_consumer/xz_extent_writer.cc
            )
target_include_directories(payload_consumer PUBLIC ${BASE_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../)


target_link_libraries(payload_consumer  PUBLIC
                        brillo-core-395517
                        brillo-streams-395517
                        base-core-395517
                        base-dbus-395517 
                        bspatch
                        puffpatch
                        atomic 
                        pthread 
                        protobuf-lite
                        protobuf
                        rt 
                        modp_b64 
                        dbus-1
                        dbus-glib-1
                        expat
                        bz2
                        policy-395517
                        rootdev
                        xz-embedded
                        ${LINKER_FLAGS}
                        )     
set_target_properties(payload_consumer PROPERTIES COMPILE_FLAGS "-MD" CMAKE_STATIC_LINKER_FLAGS ${LINKER_FLAGS})


add_library(update_engine_core STATIC
                proto_bindings/update_engine.pb.cc
                boot_control_slinux.cc
                certificate_checker.cc
                common_service.cc
                connection_manager_slinux.cc
                connection_utils.cc
                daemon.cc
                dbus_connection.cc
                dbus_service.cc
                hardware_slinux.cc
                image_properties_slinux.cc
                libcurl_http_fetcher.cc
                metrics_reporter_omaha.cc
                metrics_utils.cc
                omaha_request_action.cc
                omaha_request_params.cc
                omaha_response_handler_action.cc
                omaha_utils.cc
                p2p_manager.cc
                payload_state.cc
                power_manager_chromeos.cc
                proxy_resolver.cc
                real_system_state.cc
                update_attempter.cc
                update_boot_flags_action.cc
                update_manager/boxed_value.cc
                update_manager/chromeos_policy.cc
                update_manager/default_policy.cc
                update_manager/enough_slots_ab_updates_policy_impl.cc
                update_manager/enterprise_device_policy_impl.cc
                update_manager/evaluation_context.cc
                update_manager/interactive_update_policy_impl.cc
                update_manager/next_update_check_policy_impl.cc
                update_manager/official_build_check_policy_impl.cc
                update_manager/out_of_box_experience_policy_impl.cc
                update_manager/policy.cc
                update_manager/policy_test_utils.cc
                update_manager/real_config_provider.cc
                update_manager/real_device_policy_provider.cc
                update_manager/real_random_provider.cc
                update_manager/real_system_provider.cc
                update_manager/real_time_provider.cc
                update_manager/real_updater_provider.cc
                update_manager/staging_utils.cc
                update_manager/state_factory.cc
                update_manager/update_manager.cc
                update_manager/update_time_restrictions_policy_impl.cc
                update_manager/weekly_time.cc
                update_status_utils.cc
                chrome_browser_proxy_resolver.cc
            )
target_include_directories(update_engine_core PUBLIC ${BASE_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../)

target_link_libraries(update_engine_core  PUBLIC
                        brillo-core-395517
                        brillo-http-395517
                        base-core-395517
                        base-dbus-395517 
                        metrics-395517 
                        vboot_host
                        atomic 
                        pthread 
                        protobuf-lite
                        protobuf
                        rt 
                        modp_b64 
                        dbus-1
                        dbus-glib-1
                        expat
                        curl
                        payload_consumer
                        ${LINKER_FLAGS}
                        )     
set_target_properties(update_engine_core PROPERTIES COMPILE_FLAGS "-MD" CMAKE_STATIC_LINKER_FLAGS ${LINKER_FLAGS})

add_executable(update_engine
                main.cc
                )
target_include_directories(update_engine PUBLIC ${CHROME_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../)
target_link_libraries(update_engine  PUBLIC 
                    crypto
                    ssl
                    payload_consumer
                    update_engine_core
                    ${LINKER_FLAGS}
                    ${BASE_LIBRARIES}
)     

add_executable(update_engine_client 
                client_library/client.cc
                client_library/client_dbus.cc
                update_status_utils.cc
                common/error_code_utils.cc
                omaha_utils.cc
                update_engine_client.cc
                )
target_include_directories(update_engine_client PUBLIC 
                            ${CHROME_INCLUDE_DIRS} 
                            ${CMAKE_CURRENT_SOURCE_DIR} 
                            ${CMAKE_CURRENT_SOURCE_DIR}/../
                            ${CMAKE_CURRENT_SOURCE_DIR}/client_library/include
                            )
target_link_libraries(update_engine_client  PUBLIC
                    brillo-core-395517
                    base-core-395517
                    base-dbus-395517 
                    atomic 
                    pthread 
                    protobuf-lite
                    protobuf
                    rt 
                    modp_b64 
                    dbus-1
                    dbus-glib-1
                    expat
                    payload_consumer
                    update_engine_core
                    ${LINKER_FLAGS}
)     
                
add_executable(delta_generator 
                    payload_generator/ab_generator.cc
                    payload_generator/annotated_operation.cc
                    payload_generator/blob_file_writer.cc
                    payload_generator/block_mapping.cc
                    payload_generator/bzip.cc
                    payload_generator/cycle_breaker.cc
                    payload_generator/deflate_utils.cc
                    payload_generator/delta_diff_generator.cc
                    payload_generator/delta_diff_utils.cc
                    payload_generator/ext2_filesystem.cc
                    payload_generator/extent_ranges.cc
                    payload_generator/extent_utils.cc
                    payload_generator/full_update_generator.cc
                    payload_generator/graph_types.cc
                    payload_generator/graph_utils.cc
                    payload_generator/inplace_generator.cc
                    payload_generator/mapfile_filesystem.cc
                    payload_generator/payload_file.cc
                    payload_generator/payload_generation_config.cc
                    payload_generator/payload_signer.cc
                    payload_generator/raw_filesystem.cc
                    payload_generator/squashfs_filesystem.cc
                    payload_generator/tarjan.cc
                    payload_generator/topological_sort.cc
                    payload_generator/xz_chromeos.cc
                    payload_generator/generate_delta_main.cc
                )
target_include_directories(delta_generator PUBLIC 
                            ${CHROME_INCLUDE_DIRS} 
                            ${CMAKE_CURRENT_SOURCE_DIR} 
                            ${CMAKE_CURRENT_SOURCE_DIR}/../
                            ${CMAKE_CURRENT_SOURCE_DIR}/client_library/include
                            )
target_link_libraries(delta_generator  PUBLIC
                    crypto
                    ssl
                    xz-embedded
                    lzma
                    ext2fs
                    bsdiff
                    puffdiff
                    payload_consumer
                    ${LINKER_FLAGS}
)     
set_target_properties(delta_generator PROPERTIES COMPILE_FLAGS "-MD" CMAKE_STATIC_LINKER_FLAGS "-pie" )
