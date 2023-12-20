#!/bin/bash

main () {
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

erase_project() {
    echo "Erasing source files"
    cd src/ || echo "Error. No source directory. Aborting script"; exit
}

main
