def checkPalindrome(i, name):
    if i >= len(name):
        return True
    
    if name[i] != name[len(name) - i - 1]:
        return False

    return checkPalindrome(i+1, name)

name = "MADAM"
print(checkPalindrome(0, name))