#! /bin/bash

cppcheck --enable=all --inconclusive --library=posix --addon=misra --checkers-report="cppcheck_report"  src/app/main.cpp


