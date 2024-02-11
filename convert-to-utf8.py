import sys
import codecs


def convert_to_utf8(input_file):
    with codecs.open(input_file, 'r', 'windows-1251') as file:
        content = file.read()
    
    with codecs.open(input_file, 'w', 'utf-8') as file:
        file.write(content)


if __name__ == "__main__":
    print("deconverting to utf8")
    if len(sys.argv) < 2:
        sys.exit(1)
    
    convert_to_utf8(sys.argv[1])
