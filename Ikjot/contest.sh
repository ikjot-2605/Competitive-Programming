 #!/bin/bash
cd ~/Competitive-Programming
echo "Options"
ls
echo "Please enter directory"
read path
echo "Please enter filetype"
read filetype
echo "Please enter filename"
read filename
cd "$path"
cp "../template.$filetype" "$filename.$filetype"
echo "Opening File"
gvim "$filename.$filetype"
ls

