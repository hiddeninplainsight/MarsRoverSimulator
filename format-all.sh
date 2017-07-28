#!/bin/bash

find ./src -type f -name '*.h' -exec clang-format -style=file -i {} \;
find ./src -type f -name '*.cpp' -exec clang-format -style=file -i {} \;
