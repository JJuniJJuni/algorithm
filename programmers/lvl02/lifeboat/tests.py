from unittest import TestCase
from main import solution

class Test(TestCase):
    def test_solution(self):
        self.assertEqual(1, solution([100], 100))
        self.assertEqual(1, solution([30, 70], 100))
        self.assertEqual(3, solution([70, 50, 80, 50], 100))
        self.assertEqual(3, solution([70, 80, 50], 100))
        self.assertEqual(2, solution([70, 80, 30], 100))
        self.assertEqual(2, solution([80, 80], 100))
        self.assertEqual(3, solution([20, 60, 70, 80, 30], 100))