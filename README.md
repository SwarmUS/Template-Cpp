# Template-Cpp

This is a template repo for C++ for Swarmus

## Using the template
When creating a new repo you can select the Template-Cpp as template instead of an empty repo

## Hierachy

Each folder under src is a library and the main creates an executable.
The libraries are reused for unit testing.
The include folder are where the public headers should be put.

The include, src and test/src should all have a very similar structure

Note that in the provided example, the spi library is dependant on the hal library

````

Template-Cpp/
|-- build/
|-- CMakeLists.txt
|-- include/
|   |-- hal             #hal header files
|   |-- spi             #spi header files
|-- src/
|   |-- hal             #hal library files
|   |-- spi             #spi library files
|   `-- main.cpp        #main.cpp, application file
|-- tests/
|   |-- external        #folder with external submodule dependency (google tests)
|   |-- src             #tests location
|       |-- hal             #hal unit tests files
|       |-- spi             #spi unit tests files

````

## Usage
First clone the repo with the submodules

```git clone --recurse-submodules https://github.com/SwarmUS/Template-Cpp.git```

If you already cloned the repo, you can init the submodules 

```git submodule update --init --recursive```

Then you build the project

```
mkdir build
cd build 
cmake ..
make
```

## Tests
This projects uses Google Tests for testings, there are some examples of uses.
To run tests you can use 
```make test```

Or use CTest runner (recommended)
```ctest -V```

## Notes

The flag that treats warnings as error is disabled, you can enable it in `src/CMakeLists.txt`