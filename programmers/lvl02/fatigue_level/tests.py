from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(3, solution(80, [[80,20],[50,40],[30,10]]))