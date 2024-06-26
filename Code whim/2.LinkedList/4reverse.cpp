/*
首先定义一个cur指针，指向头结点，再定义一个pre指针，初始化为null。

然后就要开始反转了，首先要把 cur->next 节点用tmp指针保存一下，也就是保存一下这个节点。

为什么要保存一下这个节点呢，因为接下来要改变 cur->next 的指向了，将cur->next 指向pre ，此时已经反转了第一个节点了。

接下来，就是循环走如下代码逻辑了，继续移动pre和cur指针。

最后，cur 指针已经指向了null，循环结束，链表也反转完毕了。 此时我们return pre指针就可以了，pre指针就指向了新的头结点。*/
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};
// 双指针
class solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *temp;
        ListNode *cur = head;
        ListNode *pre = nullptr;
        while (cur)
        {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }

    ListNode *reverse1(ListNode *pre, ListNode *cur)
    {
        if (cur == nullptr)
            return pre;
        ListNode *temp=cur->next;
        cur->next = pre;

        return (cur,temp);
    }
    ListNode *reverse2(ListNode *head)
    {
        return reverse1(nullptr, head);
    }
};