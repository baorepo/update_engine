

### Dependency

```
echo "deb http://192.168.4.48/aptly_root/public/bbg_test/ stretch main" | sudo tee /etc/apt/sources.list.d/seeed.list
curl https://seeed-studio.github.io/pi_repo/public.key | sudo apt-key add -
sudo apt update
sudo apt install libbrillo-dev libbrotli-dev libbsdiff-dev libchrome libmetrics-dev libmodp-b64-dev libpuffin-dev librootdev-dev libvboot-reference-dev libxz-embedded-dev
sudo apt install libglib2.0-dev libevent-dev libnss3-dev libssl1.0-dev libdbus-1-dev  libprotobuf-dev protobuf-compiler libdbus-glib-1-dev libcurl4-openssl-dev libexpat1-dev libbz2-dev libdivsufsort-dev liblzma-dev libyaml-dev uuid-dev e2fslibs-dev libgtest-dev 
# if protobuf version conflict
# sudo apt remove protobuf 
# remove libminijail 
# sudo vim  /usr/lib/pkgconfig/libbrillo-395517.pc 
# sudo vim  /usr/lib/pkgconfig/libbrillo-glib-395517.pc
```

