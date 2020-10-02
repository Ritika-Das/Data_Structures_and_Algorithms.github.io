def timeInWords(h, m):
    nums = ["zero", "one", "two", "three", "four", 
            "five", "six", "seven", "eight", "nine", 
            "ten", "eleven", "twelve", "thirteen", 
            "fourteen", "fifteen", "sixteen",  
            "seventeen", "eighteen", "nineteen",  
            "twenty", "twenty one", "twenty two",  
            "twenty three", "twenty four",  
            "twenty five", "twenty six", "twenty seven", 
            "twenty eight", "twenty nine"]
    if(m>=0 and m<=30):        
      if(m==1):
        return("one minute past "+str(nums[h]))
      elif(m==0):
        return(str(nums[h])+" o' clock")
      elif(m==15):
        return("quarter past "+str(nums[h]))
      elif(m==30):
        return("half past "+str(nums[h]))
      else:
        return(str(nums[m])+" minutes past "+str(nums[h]))
    elif(m>30 and m<=59):
      if(m==45):
        return("quarter to "+str(nums[h+1]))
      else:
        return(str(nums[60-m])+" minutes to "+str(nums[h+1]))


#print(timeInWords(1,1)) 