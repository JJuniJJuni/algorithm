from unittest import TestCase
from main import solution

class TestSolution(TestCase):
  def test_solution(self):
    self.assertEqual(1, solution([1, 1, 3], 3))
    self.assertEqual(2, solution([1, 2, 3, 9, 10, 12]	, 7))
    self.assertEqual(-1, solution([1, 1, 2]	, 12))