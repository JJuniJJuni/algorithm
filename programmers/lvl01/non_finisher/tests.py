import unittest
from main import solution
class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(solution(["leo", "kiki", "eden"], ["eden", "kiki"]), "leo")
        self.assertEqual(solution(["marina", "josipa", "nikola", "vinko", "filipa"]
                                  , 	["josipa", "filipa", "marina", "nikola"]), "vinko")
        self.assertEqual(solution(["mislav", "stanko", "mislav", "ana"]
                                  , ["stanko", "ana", "mislav"]), 	"mislav")
