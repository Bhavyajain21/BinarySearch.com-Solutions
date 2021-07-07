/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
void reverse(LLNode* q, LLNode*& head) {
    if (q == NULL || q->next == NULL) {
        head = q;
        return;
    }
    reverse(q->next, head);
    q->next->next = q;
    q->next = NULL;
}
bool solve(LLNode* node) {
    LLNode* s = node;
    LLNode* f = node;
    if(s==NULL || s->next==NULL)
    {
        return true;
    }
    while(f->next!=NULL && f->next->next!=NULL)
    {
        s = s->next;
        f = f->next->next;
    }
    reverse(s->next,s->next);
    LLNode* d = node;
    LLNode* ok = s->next;

    while(ok!=NULL)
    {
        if(d->val!=ok->val)
        {
            return false;
        }
        d = d->next;
        ok = ok->next;
    }
    return true;
}
