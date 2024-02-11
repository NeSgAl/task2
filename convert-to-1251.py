import sys
import codecs


def convert_to_1251(input_file):
    with codecs.open(input_file, 'r', 'utf-8') as file:
        content = file.read()
    
    with codecs.open(input_file, 'w', 'windows-1251') as file:
        file.write(content)


if __name__ == "__main__":
    print("converting to 1251")
    if len(sys.argv) < 2:
        sys.exit(1)
    
    convert_to_1251(sys.argv[1])
