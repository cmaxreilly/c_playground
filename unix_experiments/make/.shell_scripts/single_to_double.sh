# This is a simple bash script to replace all of the names in the format "example_1" with
# names in the format "example_01"

for file in example_*[0-9];
do
    name=${file%}
    new_name=`printf $name %02d.%s`
    mv -n $file $new_name
done

