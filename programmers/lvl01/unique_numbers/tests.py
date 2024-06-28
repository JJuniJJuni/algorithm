import unittest
from main import solution
class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(solution([]),[])
        self.assertEqual(solution([1, 1]),[1])
        self.assertEqual(solution([1, 2]),[1, 2])
        self.assertEqual(solution([1, 2, 1, 3]),[1, 2, 1, 3])
        self.assertEqual(solution([1, 2, 1, 3]),[1, 2, 1, 3])
        self.assertEqual(solution([1, 1, 3, 3, 0, 1, 1]),[1,3,0,1])
        self.assertEqual(solution([4,4,4,3,3]),[4,3])