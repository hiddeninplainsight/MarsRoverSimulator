#!/bin/bash

format_code()
{
    find $1 -type f -name '*.h' -exec clang-format -style=file -i {} \;
    find $1 -type f -name '*.cpp' -exec clang-format -style=file -i {} \;
}

format_code ./mars-rover-simulator
format_code ./compiler
