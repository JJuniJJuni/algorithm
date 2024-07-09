from unittest import TestCase
from main import solution
class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(3, solution("17"))
        self.assertEqual(2, solution("011"))