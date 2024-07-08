import unittest
from main import solution


class TestSolution(unittest.TestCase):
  def test_solution(self):
    self.assertEqual([4, 3, 1, 1, 0], solution([1, 2, 3, 2, 3]))
    self.assertEqual([1, 1, 1, 1, 0], solution([4, 3, 2, 1, 2]))