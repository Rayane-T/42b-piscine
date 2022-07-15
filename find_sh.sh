find . -type f -name '*.sh' -exec basename {} \; | cut -f 1 -d '.'
