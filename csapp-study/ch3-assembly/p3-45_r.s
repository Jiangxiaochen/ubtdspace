
p3-45:     file format elf64-x86-64


Disassembly of section .init:

0000000000400488 <_init>:
  400488:	48 83 ec 08          	sub    $0x8,%rsp
  40048c:	48 8b 05 65 0b 20 00 	mov    0x200b65(%rip),%rax        # 600ff8 <_DYNAMIC+0x1d0>
  400493:	48 85 c0             	test   %rax,%rax
  400496:	74 05                	je     40049d <_init+0x15>
  400498:	e8 53 00 00 00       	callq  4004f0 <_IO_getc@plt+0x10>
  40049d:	48 83 c4 08          	add    $0x8,%rsp
  4004a1:	c3                   	retq   

Disassembly of section .plt:

00000000004004b0 <__stack_chk_fail@plt-0x10>:
  4004b0:	ff 35 52 0b 20 00    	pushq  0x200b52(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4004b6:	ff 25 54 0b 20 00    	jmpq   *0x200b54(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4004bc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004004c0 <__stack_chk_fail@plt>:
  4004c0:	ff 25 52 0b 20 00    	jmpq   *0x200b52(%rip)        # 601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  4004c6:	68 00 00 00 00       	pushq  $0x0
  4004cb:	e9 e0 ff ff ff       	jmpq   4004b0 <_init+0x28>

00000000004004d0 <__libc_start_main@plt>:
  4004d0:	ff 25 4a 0b 20 00    	jmpq   *0x200b4a(%rip)        # 601020 <_GLOBAL_OFFSET_TABLE_+0x20>
  4004d6:	68 01 00 00 00       	pushq  $0x1
  4004db:	e9 d0 ff ff ff       	jmpq   4004b0 <_init+0x28>

00000000004004e0 <_IO_getc@plt>:
  4004e0:	ff 25 42 0b 20 00    	jmpq   *0x200b42(%rip)        # 601028 <_GLOBAL_OFFSET_TABLE_+0x28>
  4004e6:	68 02 00 00 00       	pushq  $0x2
  4004eb:	e9 c0 ff ff ff       	jmpq   4004b0 <_init+0x28>

Disassembly of section .plt.got:

00000000004004f0 <.plt.got>:
  4004f0:	ff 25 02 0b 20 00    	jmpq   *0x200b02(%rip)        # 600ff8 <_DYNAMIC+0x1d0>
  4004f6:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000400500 <_start>:
  400500:	31 ed                	xor    %ebp,%ebp
  400502:	49 89 d1             	mov    %rdx,%r9
  400505:	5e                   	pop    %rsi
  400506:	48 89 e2             	mov    %rsp,%rdx
  400509:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40050d:	50                   	push   %rax
  40050e:	54                   	push   %rsp
  40050f:	49 c7 c0 10 07 40 00 	mov    $0x400710,%r8
  400516:	48 c7 c1 a0 06 40 00 	mov    $0x4006a0,%rcx
  40051d:	48 c7 c7 7a 06 40 00 	mov    $0x40067a,%rdi
  400524:	e8 a7 ff ff ff       	callq  4004d0 <__libc_start_main@plt>
  400529:	f4                   	hlt    
  40052a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400530 <deregister_tm_clones>:
  400530:	b8 47 10 60 00       	mov    $0x601047,%eax
  400535:	55                   	push   %rbp
  400536:	48 2d 40 10 60 00    	sub    $0x601040,%rax
  40053c:	48 83 f8 0e          	cmp    $0xe,%rax
  400540:	48 89 e5             	mov    %rsp,%rbp
  400543:	76 1b                	jbe    400560 <deregister_tm_clones+0x30>
  400545:	b8 00 00 00 00       	mov    $0x0,%eax
  40054a:	48 85 c0             	test   %rax,%rax
  40054d:	74 11                	je     400560 <deregister_tm_clones+0x30>
  40054f:	5d                   	pop    %rbp
  400550:	bf 40 10 60 00       	mov    $0x601040,%edi
  400555:	ff e0                	jmpq   *%rax
  400557:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  40055e:	00 00 
  400560:	5d                   	pop    %rbp
  400561:	c3                   	retq   
  400562:	0f 1f 40 00          	nopl   0x0(%rax)
  400566:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40056d:	00 00 00 

0000000000400570 <register_tm_clones>:
  400570:	be 40 10 60 00       	mov    $0x601040,%esi
  400575:	55                   	push   %rbp
  400576:	48 81 ee 40 10 60 00 	sub    $0x601040,%rsi
  40057d:	48 c1 fe 03          	sar    $0x3,%rsi
  400581:	48 89 e5             	mov    %rsp,%rbp
  400584:	48 89 f0             	mov    %rsi,%rax
  400587:	48 c1 e8 3f          	shr    $0x3f,%rax
  40058b:	48 01 c6             	add    %rax,%rsi
  40058e:	48 d1 fe             	sar    %rsi
  400591:	74 15                	je     4005a8 <register_tm_clones+0x38>
  400593:	b8 00 00 00 00       	mov    $0x0,%eax
  400598:	48 85 c0             	test   %rax,%rax
  40059b:	74 0b                	je     4005a8 <register_tm_clones+0x38>
  40059d:	5d                   	pop    %rbp
  40059e:	bf 40 10 60 00       	mov    $0x601040,%edi
  4005a3:	ff e0                	jmpq   *%rax
  4005a5:	0f 1f 00             	nopl   (%rax)
  4005a8:	5d                   	pop    %rbp
  4005a9:	c3                   	retq   
  4005aa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000004005b0 <__do_global_dtors_aux>:
  4005b0:	80 3d 91 0a 20 00 00 	cmpb   $0x0,0x200a91(%rip)        # 601048 <completed.7594>
  4005b7:	75 11                	jne    4005ca <__do_global_dtors_aux+0x1a>
  4005b9:	55                   	push   %rbp
  4005ba:	48 89 e5             	mov    %rsp,%rbp
  4005bd:	e8 6e ff ff ff       	callq  400530 <deregister_tm_clones>
  4005c2:	5d                   	pop    %rbp
  4005c3:	c6 05 7e 0a 20 00 01 	movb   $0x1,0x200a7e(%rip)        # 601048 <completed.7594>
  4005ca:	f3 c3                	repz retq 
  4005cc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004005d0 <frame_dummy>:
  4005d0:	bf 20 0e 60 00       	mov    $0x600e20,%edi
  4005d5:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  4005d9:	75 05                	jne    4005e0 <frame_dummy+0x10>
  4005db:	eb 93                	jmp    400570 <register_tm_clones>
  4005dd:	0f 1f 00             	nopl   (%rax)
  4005e0:	b8 00 00 00 00       	mov    $0x0,%eax
  4005e5:	48 85 c0             	test   %rax,%rax
  4005e8:	74 f1                	je     4005db <frame_dummy+0xb>
  4005ea:	55                   	push   %rbp
  4005eb:	48 89 e5             	mov    %rsp,%rbp
  4005ee:	ff d0                	callq  *%rax
  4005f0:	5d                   	pop    %rbp
  4005f1:	e9 7a ff ff ff       	jmpq   400570 <register_tm_clones>

00000000004005f6 <gets>:
  4005f6:	55                   	push   %rbp
  4005f7:	53                   	push   %rbx
  4005f8:	48 83 ec 08          	sub    $0x8,%rsp
  4005fc:	48 89 fd             	mov    %rdi,%rbp
  4005ff:	48 89 fb             	mov    %rdi,%rbx
  400602:	eb 06                	jmp    40060a <gets+0x14>
  400604:	88 03                	mov    %al,(%rbx)
  400606:	48 8d 5b 01          	lea    0x1(%rbx),%rbx
  40060a:	48 8b 3d 2f 0a 20 00 	mov    0x200a2f(%rip),%rdi        # 601040 <__TMC_END__>
  400611:	e8 ca fe ff ff       	callq  4004e0 <_IO_getc@plt>
  400616:	83 f8 0a             	cmp    $0xa,%eax
  400619:	74 05                	je     400620 <gets+0x2a>
  40061b:	83 f8 ff             	cmp    $0xffffffff,%eax
  40061e:	75 e4                	jne    400604 <gets+0xe>
  400620:	83 f8 ff             	cmp    $0xffffffff,%eax
  400623:	0f 94 c2             	sete   %dl
  400626:	48 39 eb             	cmp    %rbp,%rbx
  400629:	0f 94 c0             	sete   %al
  40062c:	84 c2                	test   %al,%dl
  40062e:	75 08                	jne    400638 <gets+0x42>
  400630:	c6 03 00             	movb   $0x0,(%rbx)
  400633:	48 89 e8             	mov    %rbp,%rax
  400636:	eb 05                	jmp    40063d <gets+0x47>
  400638:	b8 00 00 00 00       	mov    $0x0,%eax
  40063d:	48 83 c4 08          	add    $0x8,%rsp
  400641:	5b                   	pop    %rbx
  400642:	5d                   	pop    %rbp
  400643:	c3                   	retq   

0000000000400644 <echo>:
  400644:	48 83 ec 18          	sub    $0x18,%rsp
  400648:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40064f:	00 00 
  400651:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  400656:	31 c0                	xor    %eax,%eax
  400658:	48 89 e7             	mov    %rsp,%rdi
  40065b:	e8 96 ff ff ff       	callq  4005f6 <gets>
  400660:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
  400665:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  40066c:	00 00 
  40066e:	74 05                	je     400675 <echo+0x31>
  400670:	e8 4b fe ff ff       	callq  4004c0 <__stack_chk_fail@plt>
  400675:	48 83 c4 18          	add    $0x18,%rsp
  400679:	c3                   	retq   

000000000040067a <main>:
  40067a:	48 83 ec 08          	sub    $0x8,%rsp
  40067e:	b8 00 00 00 00       	mov    $0x0,%eax
  400683:	e8 bc ff ff ff       	callq  400644 <echo>
  400688:	b8 00 00 00 00       	mov    $0x0,%eax
  40068d:	48 83 c4 08          	add    $0x8,%rsp
  400691:	c3                   	retq   
  400692:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400699:	00 00 00 
  40069c:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004006a0 <__libc_csu_init>:
  4006a0:	41 57                	push   %r15
  4006a2:	41 56                	push   %r14
  4006a4:	41 89 ff             	mov    %edi,%r15d
  4006a7:	41 55                	push   %r13
  4006a9:	41 54                	push   %r12
  4006ab:	4c 8d 25 5e 07 20 00 	lea    0x20075e(%rip),%r12        # 600e10 <__frame_dummy_init_array_entry>
  4006b2:	55                   	push   %rbp
  4006b3:	48 8d 2d 5e 07 20 00 	lea    0x20075e(%rip),%rbp        # 600e18 <__init_array_end>
  4006ba:	53                   	push   %rbx
  4006bb:	49 89 f6             	mov    %rsi,%r14
  4006be:	49 89 d5             	mov    %rdx,%r13
  4006c1:	4c 29 e5             	sub    %r12,%rbp
  4006c4:	48 83 ec 08          	sub    $0x8,%rsp
  4006c8:	48 c1 fd 03          	sar    $0x3,%rbp
  4006cc:	e8 b7 fd ff ff       	callq  400488 <_init>
  4006d1:	48 85 ed             	test   %rbp,%rbp
  4006d4:	74 20                	je     4006f6 <__libc_csu_init+0x56>
  4006d6:	31 db                	xor    %ebx,%ebx
  4006d8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  4006df:	00 
  4006e0:	4c 89 ea             	mov    %r13,%rdx
  4006e3:	4c 89 f6             	mov    %r14,%rsi
  4006e6:	44 89 ff             	mov    %r15d,%edi
  4006e9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  4006ed:	48 83 c3 01          	add    $0x1,%rbx
  4006f1:	48 39 eb             	cmp    %rbp,%rbx
  4006f4:	75 ea                	jne    4006e0 <__libc_csu_init+0x40>
  4006f6:	48 83 c4 08          	add    $0x8,%rsp
  4006fa:	5b                   	pop    %rbx
  4006fb:	5d                   	pop    %rbp
  4006fc:	41 5c                	pop    %r12
  4006fe:	41 5d                	pop    %r13
  400700:	41 5e                	pop    %r14
  400702:	41 5f                	pop    %r15
  400704:	c3                   	retq   
  400705:	90                   	nop
  400706:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40070d:	00 00 00 

0000000000400710 <__libc_csu_fini>:
  400710:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000400714 <_fini>:
  400714:	48 83 ec 08          	sub    $0x8,%rsp
  400718:	48 83 c4 08          	add    $0x8,%rsp
  40071c:	c3                   	retq   
