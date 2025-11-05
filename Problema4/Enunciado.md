## 4. Mediana de Dois Arrays Ordenados  
**Dificuldade:** Difícil  

### 🧩 Problema

Dadas duas listas ordenadas `nums1` e `nums2`, de tamanhos `m` e `n` respectivamente, retorne a **mediana** das duas listas combinadas.

A complexidade total de tempo deve ser **O(log (m+n))**.

---

### 💡 Exemplo 1
**Entrada:**  
`nums1 = [1,3]`, `nums2 = [2]`  

**Saída:**  
`2.00000`  

**Explicação:**  
Array combinado = `[1,2,3]`, e a mediana é `2`.

---

### 💡 Exemplo 2
**Entrada:**  
`nums1 = [1,2]`, `nums2 = [3,4]`  

**Saída:**  
`2.50000`  

**Explicação:**  
Array combinado = `[1,2,3,4]`, e a mediana é `(2 + 3) / 2 = 2.5`.

---

### ⚙️ Restrições
- `nums1.length == m`  
- `nums2.length == n`  
- `0 <= m <= 1000`  
- `0 <= n <= 1000`  
- `1 <= m + n <= 2000`  
- `-10⁶ <= nums1[i], nums2[i] <= 10⁶`
`
