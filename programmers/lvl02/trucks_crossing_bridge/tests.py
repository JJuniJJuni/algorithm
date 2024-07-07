from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(3, solution(2, 10, [7]))
        self.assertEqual(5, solution(2, 10, [7, 4]))
        self.assertEqual(8, solution(2, 10, [7,4,5,6]))
        self.assertEqual(101, solution(100, 100, [10]))
        self.assertEqual(110, solution(100, 100
                                       , [10,10,10,10,10,10,10,10,10,10]))