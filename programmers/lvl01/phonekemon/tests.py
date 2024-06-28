import unittest
from main import solution
class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(2, solution([3,1,2,3]))
        self.assertEqual(3, solution([3,3,3,2,2,4]))
        self.assertEqual(2, solution([3,3,3,2,2,2]))
        self.assertEqual(2, solution([1, 2, 3, 4, 5]))
