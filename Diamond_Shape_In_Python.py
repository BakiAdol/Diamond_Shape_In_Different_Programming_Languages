Height=9
Mid=int(Height/2)

for row in range(Height):
    if row>Mid:
        for col in range(row-Mid):
            print(end=" ")
        for col in range(row-Mid,Height-row+Mid):
            print("*",end="")
    else:
        for col in range(Mid-row):
            print(end=" ")
        for col in range(Mid-row,Mid+row+1):
            print("*",end="")
    print()
    
