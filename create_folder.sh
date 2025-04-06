#!/bin/bash

# Check if a folder name is provided
if [ -z "$1" ]; then
  echo "Usage: $0 <folder_name>"
  exit 1
fi

# Get the folder name from the first argument
FOLDER_NAME="$1"

# Create the folder in the current directory
mkdir -p "$FOLDER_NAME"

# Navigate into the folder
cd "$FOLDER_NAME" || exit

# Create the required files
touch description.md input.txt main.cpp

# Add a basic template to main.cpp
cat <<EOL > main.cpp
#include <iostream>
using namespace std;

int main() {
    // Your code here
    return 0;
}
EOL

echo "Folder '$FOLDER_NAME' created with files: description.md, input.txt, and main.cpp"
