
def NUM_RABBITS(HEADS, LEGS): 
	FLAG = 0
	FLAG = (LEGS) - 2 * (HEADS) 
	FLAG = FLAG / 2
	return FLAG

HEADS = int(input())
LEGS = int(input())
RABBITS = NUM_RABBITS(HEADS, LEGS)
HENS=(HEADS - RABBITS)
if(RABBITS<1):
    print(int(HENS),int(RABBITS)) 
else:
    print("No solution")
