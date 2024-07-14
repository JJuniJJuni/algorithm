from unittest import TestCase
from main import *

class TestSolution(TestCase):
    def test_alpha_distance(self):
        self.assertEqual(1, alpha_distance('A', 'B'))
        self.assertEqual(1, alpha_distance('A', 'Z'))
        self.assertEqual(9, alpha_distance('A', 'J'))
        self.assertEqual(13, alpha_distance('A', 'N'))


    def test_solution(self):
        self.assertEqual(11, solution('JAZ'))
        self.assertEqual(23, solution('JAN'))
        self.assertEqual(56, solution('JEROEN'))
        self.assertEqual(10, solution('AAAAAAAAABBBBB'))
        self.assertEqual(16, solution('ZAAAAAAAAAAAZAAAAAAAAAAAZ'))
        self.assertEqual(60, solution('AAAEASAHQAYTAAAJ'))
        self.assertEqual(66, solution('DYAOAAAARQANAWA'))
        self.assertEqual(10, solution('ABABAAAAABA'))
