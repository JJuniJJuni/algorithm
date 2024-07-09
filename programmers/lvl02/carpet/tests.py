from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual([4, 3], solution(10, 2))
        self.assertEqual([3, 3], solution(8, 1))
        self.assertEqual([8, 6], solution(24, 24))