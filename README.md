# Hello Conan

Sandbox to explore Conan feature




## How To

### Setup new project

1. Generate code for new Conan package: `conan new hello-conan/0.1.0 --test --sources --ci-travis-gcc`
1. Fix generated code...
1. Create Conan package: `conan create . cthiebault/unstable`
1. Clion config: `conan install . --install-folder=src/cmake-build-debug`

### Work with existing project

1. Create Conan package: `conan create . cthiebault/unstable`
1. `conan install . --install-folder=src/cmake-build-debug`