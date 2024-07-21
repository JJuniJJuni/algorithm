import unittest
from main import solution

class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(28, solution(6, [7, 10]))