#!/bin/bash

function main {
    echo "This script will erase all of your work and initialize your project."
    echo "Are you sure that you want to do this? (type 'y' or 'n'):"
    read answer
    if [[ "$answer" == 'y' || "$answer" == 'Y' ]]; then
        echo "You answered yes. Project being erased"
        erase_project
    elif [[ "$answer" == n || "$answer" == 'N' ]]; then
        echo "You answered no. Script terminated"
    else
        echo "Wrong fucking answer dipshit"
    fi

}

function erase_project {
    init_src
}

function init_src {
    echo "Erasing source files"
    echo -n > src/functions.c
    echo '#include <stdio.h>' >> src/functions.c
    echo '#include <math.h>' >> src/functions.c
    echo '#include "functions.h"' >> src/functions.c
}

function erase_file_to_line {
    local file=$1
    local line=$2
    if [ -f "$file" ]; then
        # Truncate the file from the specified line
        head -n 
    fi
}

# Tests
#erase_file_to_line ./init.sh 5
main
