#week09-3.py leetcode 860. Lemonade Change
class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        b5,b10,b20 = 0,0,0 # �@�}�l�r�� 0 �i
        for b in bills: #�ΰj��A�C�C���ȤH���r��
            if b==5: #�ȤH��5���r�A���Χ��
                b5+=1 #������ 5�� ���_��
            elif b==10: #�ȤH��10���r�A�n���
                if b5==0: return False #�S5�� ����
                b10 += 1 # �p�G�S���ѡA�N����
                b5 -= 1 # �A�� 5�� ���ȤH
            else:#�̫�O20���r
                if b10>0 and b5>0: # �Ĥ@�ا�k: 10��+5��
                    b20 += 1
                    b10 -= 1
                    b5 -= 1
                elif b5>=3: #��2�ا�k: 5��*3
                    b20 += 1
                    b5 -= 3
                else: #�������s������
                    return False
        return True
