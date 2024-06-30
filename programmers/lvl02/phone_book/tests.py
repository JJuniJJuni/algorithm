import unittest
from main import solution
class PhoneBookTestCase(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(False, solution(["119", "97674223", "1195524421"]))
        self.assertEqual(True, solution(["123","456","789"]))
        self.assertEqual(False, solution(["12","123","1235","567","88"]))
