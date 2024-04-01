from Crypto.PublicKey import RSA
import cryto.decode_alltypes as decode_alltypes

#f = open("privacy_enhanced_mail_1f696c053d76a78c2c531bb013a92d4a (1).pem", 'r')  #'r':chi_doc
#key = RSA.importKey(f.read())


# print(RSA.importKey(open('2048b-rsa-example-cert_3220bd92e30015fe4fbeb84a755e7ca5.der', 'rb').read()).n)
# 출처: https://mokpo.tistory.com/632 [MSS:티스토리] 

# f = open("bruce_rsa_6e7ecd53b443a97013397b1a1ea30e14.pub",'r')
# key = RSA.import_key(f.read()).n
# print(key)


# u = decode_alltypes.decode('hex', "0x1C87F3C4F10")
# print(u) 
# I dont make sense of it https://mokpo.tistory.com/632 


f = open("transparency_afff0345c6f99bf80eab5895458d8eab.pem",'r')
key = RSA.import_key(f.read()).n

print(type(key), key )
