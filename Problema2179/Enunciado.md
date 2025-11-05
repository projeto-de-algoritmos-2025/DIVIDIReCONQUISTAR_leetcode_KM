## 2179. Contar Triplas Boas em um Array  
**Dificuldade:** Difícil  

### 🧩 Problema

São dados dois arrays `nums1` e `nums2`, ambos indexados a partir de 0 e de comprimento `n`.  
Cada um deles é uma **permutação** de `[0, 1, ..., n - 1]`.

Uma **tripla boa** é um conjunto de 3 valores distintos que aparecem em **ordem crescente de posição** tanto em `nums1` quanto em `nums2`.  

Em outras palavras, se definirmos:
- `pos1v` = índice do valor `v` em `nums1`, e  
- `pos2v` = índice do valor `v` em `nums2`,  

então uma tripla boa é um conjunto `(x, y, z)` tal que:  
`0 <= x, y, z <= n - 1` e  
`pos1x < pos1y < pos1z` **e** `pos2x < pos2y < pos2z`.

Retorne o **número total de triplas boas**.

---

### 💡 Exemplo 1
**Entrada:**  
`nums1 = [2,0,1,3]`, `nums2 = [0,1,2,3]`  

**Saída:**  
`1`  

**Explicação:**  
Há 4 triplas `(x,y,z)` tais que `pos1x < pos1y < pos1z`:  
`(2,0,1)`, `(2,0,3)`, `(2,1,3)` e `(0,1,3)`.  
Dessas, apenas a tripla `(0,1,3)` também satisfaz `pos2x < pos2y < pos2z`.  
Portanto, há apenas **1 tripla boa**.

---

### 💡 Exemplo 2
**Entrada:**  
`nums1 = [4,0,1,3,2]`, `nums2 = [4,1,0,2,3]`  

**Saída:**  
`4`  

**Explicação:**  
As 4 triplas boas são: `(4,0,3)`, `(4,0,2)`, `(4,1,3)` e `(4,1,2)`.

---

### ⚙️ Restrições
- `n == nums1.length == nums2.length`  
- `3 <= n <= 10⁵`  
- `0 <= nums1[i], nums2[i] <= n - 1`  
- `nums1` e `nums2` são permutações de `[0, 1, ..., n - 1]`.
