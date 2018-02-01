##### Trace of GeeksforGeeks' LIS description #####

**A**[] = <span style="background-color:aquamarine">{ 0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15 }</span>

---
**A**[0] = <span style="background-color:aquamarine">0</span>. Case 1. There are no active lists, create one.  
* 0\.  

**tail** = <span style="background-color:aquamarine">{ 0 }</span>  

---
**A**[1] = <span style="background-color:aquamarine">8</span>. <span style="background-color:orange">Case 2.</span> Clone and extend.  
* 0\.  
* 0, 8.  

**tail** = <span style="background-color:aquamarine">{ 0, 8 }</span>  

---
**A**[2] = <span style="background-color:aquamarine">4</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.  
* 0\.  
* 0, 4.  
* ~~0, 8. Discarded~~  

**tail** = <span style="background-color:aquamarine">{ 0, 4 }</span>  

---
**A**[3] = <span style="background-color:aquamarine">12</span>. <span style="background-color:orange">Case 2.</span> Clone and extend.  
* 0\.  
* 0, 4.  
* 0, 4, 12.  

**tail** = <span style="background-color:aquamarine">{ 0, 4, 12 }</span>  

---
**A**[4] = <span style="background-color:aquamarine">2</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.  
* 0\.  
* 0, 2.  
* ~~0, 4. Discarded.~~  
* 0, 4, 12.  

**tail** = <span style="background-color:aquamarine">{ 0, 2, 12 }</span>  

---
**A**[5] = <span style="background-color:aquamarine">10</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.  
* 0\.  
* 0, 2.  
* 0, 2, 10.  
* ~~0, 4, 12. Discarded.~~  

**tail** = <span style="background-color:aquamarine">{ 0, 2, 10 }</span>  

---
**A**[6] = <span style="background-color:aquamarine">6</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.  
* 0\.  
* 0, 2.  
* 0, 2, 6.  
* ~~0, 2, 10. Discarded.~~  

**tail** = <span style="background-color:aquamarine">{ 0, 2, 6 }</span>  

---
**A**[7] = <span style="background-color:aquamarine">14</span>. <span style="background-color:orange">Case 2.</span> Clone and extend.  
* 0\.  
* 0, 2.  
* 0, 2, 6.  
* 0, 2, 6, 14.  

**tail** = <span style="background-color:aquamarine">{ 0, 2, 6, 14 }</span>  

---
**A**[8] = <span style="background-color:aquamarine">1</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.  
* 0\.  
* 0, 1.  
* ~~0, 2. Discarded.~~  
* 0, 2, 6.  
* 0, 2, 6, 14.  

**tail** = <span style="background-color:aquamarine">{ 0, 1, 6, 14 }</span>  

---
**A**[9] = <span style="background-color:aquamarine">9</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.  
* 0\.  
* 0, 1.  
* 0, 2, 6.  
* 0, 2, 6, 9.  
* ~~0, 2, 6, 14. Discarded.~~  

**tail** = <span style="background-color:aquamarine">{ 0, 1, 6, 9 }</span>  

---
**A[**10] = <span style="background-color:aquamarine">5</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.  
* 0\.  
* 0, 1.  
* 0, 1, 5.
* ~~0, 2, 6. Discarded.~~  
* 0, 2, 6, 9.  

**tail** = <span style="background-color:aquamarine">{ 0, 1, 5, 9 }</span>  

---
**A**[11] = <span style="background-color:aquamarine">13</span>. <span style="background-color:orange">Case 2.</span> Clone and extend.  
* 0\.  
* 0, 1.  
* 0, 1, 5.  
* 0, 2, 6, 9.  
* 0, 2, 6, 9, 13.  

**tail** = <span style="background-color:aquamarine">{ 0, 1, 5, 9, 13 }</span>  

---
**A**[12] = <span style="background-color:aquamarine">3</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.  
* 0\.  
* 0, 1.  
* 0, 1, 3.  
* ~~0, 1, 5. Discarded.~~  
* 0, 2, 6, 9.  
* 0, 2, 6, 9, 13.  

**tail** = <span style="background-color:aquamarine">{ 0, 1, 3, 9, 13 }</span>  

---
**A**[13] = <span style="background-color:aquamarine">11</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.  
* 0\.  
* 0, 1.  
* 0, 1, 3.  
* 0, 2, 6, 9.  
* 0, 2, 6, 9, 11.  
* ~~0, 2, 6, 9, 13. Discarded.~~  

**tail** = <span style="background-color:aquamarine">{ 0, 1, 3, 9, 11 </span>}  

---
**A**[14] = <span style="background-color:aquamarine">7</span>. <span style="background-color:pink">Case 3.</span> Clone, extend and discard.
* 0\.  
* 0, 1.  
* 0, 1, 3.  
* 0, 1, 3, 7.  
* ~~0, 2, 6, 9. Discarded.~~  
* 0, 2, 6, 9, 11.  

**tail** = <span style="background-color:aquamarine">{ 0, 1, 3, 7, 11 }</span>  

---
**A**[15] = <span style="background-color:aquamarine">15</span>. <span style="background-color:orange">Case 2.</span> Clone and extend.
* 0\.  
* 0, 1.  
* 0, 1, 3.  
* 0, 1, 3, 7.  
* 0, 2, 6, 9, 11.  
* 0, 2, 6, 9, 11, 15. <\-- LIS List  

**tail** = <span style="background-color:aquamarine">{ 0, 1, 3, 7, 11, 15 }</span>  

