#!/bin/bash
echo "enter long sentence"
read long_sentence

echo "enter character to find"

read character

character_to_find="$character"

position=$(echo "$long_sentence" | grep -b -o "$character_to_find" | cut -d':' -f1)

if [ -n "$position" ]; then
    echo "Position of '$character_to_find' in the string: $position"
else
    echo "'$character_to_find' not found in the string."
fi

