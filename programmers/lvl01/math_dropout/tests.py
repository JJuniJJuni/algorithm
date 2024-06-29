import unittest
from main import solution

class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual([1], solution([1,2,3,4,5]))
        self.assertEqual([1, 2, 3], solution([1,3,2,4,2]))