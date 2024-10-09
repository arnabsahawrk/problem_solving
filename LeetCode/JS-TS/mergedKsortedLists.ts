/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function mergeKLists(/** mut */lists: Array<ListNode | null>): ListNode | null {
    if (lists.length === 0) {
        return null;
    }

    let head = new ListNode();
    let ptr = head;

    while (true) {
        let minNode = undefined;
        let hasSeenNode = false;
        let minI;
        for (let i = 0; i < lists.length; i++) {
            const node = lists[i];
            if (node) {
                hasSeenNode = true;

                if (!minNode) {
                    minNode = node;
                    minI = i;
                } else if (node.val < minNode.val) {
                    minNode = node;
                    minI = i;
                }
            }
        }

        if (!hasSeenNode) {
            break;
        }

        // add to list
        ptr.next = minNode;
        ptr = minNode;

        // walk from list that it was taken from
        lists[minI] = minNode.next;
    }

    return head.next;
};