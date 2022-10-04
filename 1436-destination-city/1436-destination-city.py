class Solution(object):
    def destCity(self, paths):
        """
        :type paths: List[List[str]]
        :rtype: str
        """
        outgoing_path={}
        for path in paths:
            city_a,city_b=path
            if city_a in outgoing_path:
                outgoing_path[city_a]+=1
            else:
                outgoing_path[city_a]=1
            if city_b in outgoing_path:
                outgoing_path[city_b]+=1
            else:
                outgoing_path[city_b]=0
                
        for city in outgoing_path:
            if outgoing_path[city]==0:
                return city
                