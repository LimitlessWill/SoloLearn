class ceaser:
    def __init__(self,string,key):
        self.txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        self.key = -key
        self.string = string
        self.encrypt = ""
        for x in self.string:
            if x.isalpha():
                i = self.txt.index(x)
                self.encrypt += self.txt[(i+self.key)%26]
            else:
                self.encrypt += x
        
    def recrypt(self,key):
        self.key = key
        new = ceaser(self.string,self.key)
        return "#recrypt_start#\n"+new.encrypt+"\n#recrypt_end#"

var = ceaser("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z",3)
print("-- original_string_to_decrypt_start --")
print(var.string)
print("-- original_string_to_decrypt_end   --")
print(var.encrypt)
print(var.recrypt(1))

#Plain A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
#CipherX Y Z A B C D E F G H I J K L M N O P Q R S T U V W
