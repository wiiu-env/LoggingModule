[![CI-Release](https://github.com/wiiu-env/LoggingModule/actions/workflows/ci.yml/badge.svg)](https://github.com/wiiu-env/LoggingModule/actions/workflows/ci.yml)

## Usage
(`[ENVIRONMENT]` is a placeholder for the actual environment name.)

1. Copy the file `LoggingModule.wms` into `sd:/wiiu/environments/[ENVIRONMENT]/modules`.

## Building using the Dockerfile

It's possible to use a docker image for building. This way you don't need anything installed on your host system.

```
# Build docker image (only needed once)
docker build . -t loggingmodule-builder

# make 
docker run -it --rm -v ${PWD}:/project loggingmodule-builder make

# make clean
docker run -it --rm -v ${PWD}:/project loggingmodule-builder make clean
```
## Format the code via docker

`docker run --rm -v ${PWD}:/src ghcr.io/wiiu-env/clang-format:13.0.0-2 -r ./src -i`
