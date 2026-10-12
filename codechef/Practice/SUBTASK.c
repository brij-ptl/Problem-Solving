// Problem: SUBTASK
// Platform: codechef
// Language: # cook your dish here
t = int(input)
for i in range(t):
    n,m,k = map(int,input().split())
    A = list(map(int,input().split()))
    co = A.count(1)
    mo = A[:k]
    com = mo.count(1)
    if co==n :
        print("100")
    elif com == m:
        print("50")
    else:
        print("0")
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/SUBTASK?tab=Help
// Solved on: 2026-10-12T07:47:59.931Z

# cook your dish here
t = int(input())
for i in range(t):
    n, m, k = map(int, input().split())
    A = list(map(int, input().split()))
    
    # 1. Check if all N test cases passed
    if A.count(1) == n:
        print(100)
    
    # 2. Check if the first M test cases passed
    # Slice the list up to m, and check if all those are 1
    elif A[:m].count(1) == m:
        print(k)
        
    # 3. Otherwise, 0 points
    else:
        print(0)