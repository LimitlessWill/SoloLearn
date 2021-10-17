noises = {"Grr":"Lion","Rawr":"Tiger","Ssss":"Snake","Chirp":"Bird"}
n = input().split()
for noise in n:
    print(noises[noise],end=" ")
