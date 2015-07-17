/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICThreadSafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary * _mutableDictionary;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

- (void).cxx_destruct;
- (unsigned int)count;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end