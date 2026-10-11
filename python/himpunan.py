R = [[1,2],[1,4],[2,3],[3,1],[4,2]]
S = [[2,1],[2,3],[3,2],[4,1],[4,3]]

SoR = []

for i in range(len(R)):
    for j in range(len(S)):
        if R[i][1] == S[j][0]:
            if [R[i][0],S[j][1]] not in SoR:
                SoR.append([R[i][0],S[j][1]])

print(SoR)