#include "edge.h"
#include <cassert>

/// Do not use,just so Edge can be in a map. TODO: find a way to remove this!
Edge::Edge(){

}

/// Constructs an Edge from the specfieid Nodes and of the specified weight.
Edge::Edge(const Node &from, const Node &to,  int weight): weight_(weight), from_(from), to_(to){
    // make sure the from and to Edges are not the same Edge, that makes no sense
    assert(!(from == to));
}

/// Returns the starting Node of the Edge.
Node Edge::from() const{
    return from_;
}

/// Returns the ending Node of the Edge.
Node Edge::to() const{
    return to_;
}

/// Returns the weight of the Edge.
int Edge::weight() const{
    return weight_;
}

/// Returns true if the two edges have the same starting and ending Nodes, _regardeless of their weights_.
bool operator==(const Edge &lhs, const Edge &rhs){
    return (lhs.from() == rhs.from()) && (lhs.to() == rhs.to());
}
