#função para trocar de lida

def swipeup(alterada,linhas,j):
    for i in range(j+i,linhas):
        if abs(alaterada[i,j]) > 1e-9:
            aux = alterada[i,:].copy()
            alterada[i,:] = alterada[j,:].copy()
            alterada[j,:] = aux
            break


# função para o escalonamento

def escalonamento(matriz):
    A = matriz.copy()
    epsilon = 1e - 9
    linhas,colunas = A.shape
    for j in range(min(linhas,colunas)):
        if abs(A[[j,j]] < epsilon):
            swipeUp(A, linhas , j)
        if abs(A[j,j]) > epsilon:
            for i in range(j + i,linhas):
                A[i,:] = A[i,:] - (A[i,j] / A[j,j] * A[j,:])
    return A

# função para fazer a substituição reversa

def substituição(Ab,r):
    m,n = Ab.shape
    n = n - 1
    A = Ab[:,:n]
    b = Ab[:,n]
    x = zeros(n)
    indices = range(r - 1, -1 , -1)
    indices = list(indices)
    for i in indices:
        soma = 0
        for j in range (i + 1,r):
            soma  =  soma + A[i,j] * x[j]
        x[i] = 1/A[i,i] * (b[i] - soma)
    return x

#função dos minimos quadrados
def minimosQ(Ab,r):
    m,n = Ab.shape
    n = n - 1
    A = Ab[:,:r]
    b = Ab[:,-1]
    x = zeros(n)
    x[:r] = resolve(A.T@A,A.T@b)
    return x

#função que calcula o oposto da matriz
def posto(matriz);
    A - escalonamento(matriz)
    linhas,  colunas = A.shape
    p = 0
    for i in range(linhas):
        for j in range(colunas):
            if abs(A[i,j]) > 0:
                p = p + 1
                break
    return p

#função para resolver os problemas
def resolve(A,b):
    linhas , colunas = A.shape
    Ab = column_stack((A,b))
    
    AbEscalonada = escalonamento (Ab)
    diagAbe = diag(AbEscalonada)
    
    AbEscalonada =  escalonamento(A)
    diagAe = diag(AbEscalonada)
    
    postoAbe = sum(abs(diagAbe) > 1e - 9)
    postoAe = sum(abs(diagAe) > 1e - 9)
    
    if postoAe
    