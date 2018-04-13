
ls2:     file format elf64-x86-64


Disassembly of section .init:

00000000004006e0 <_init>:
  4006e0:	48 83 ec 08          	sub    $0x8,%rsp
  4006e4:	48 8b 05 0d 19 20 00 	mov    0x20190d(%rip),%rax        # 601ff8 <_DYNAMIC+0x1d0>
  4006eb:	48 85 c0             	test   %rax,%rax
  4006ee:	74 05                	je     4006f5 <_init+0x15>
  4006f0:	e8 fb 00 00 00       	callq  4007f0 <sprintf@plt+0x10>
  4006f5:	48 83 c4 08          	add    $0x8,%rsp
  4006f9:	c3                   	retq   

Disassembly of section .plt:

0000000000400700 <puts@plt-0x10>:
  400700:	ff 35 02 19 20 00    	pushq  0x201902(%rip)        # 602008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400706:	ff 25 04 19 20 00    	jmpq   *0x201904(%rip)        # 602010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40070c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400710 <puts@plt>:
  400710:	ff 25 02 19 20 00    	jmpq   *0x201902(%rip)        # 602018 <_GLOBAL_OFFSET_TABLE_+0x18>
  400716:	68 00 00 00 00       	pushq  $0x0
  40071b:	e9 e0 ff ff ff       	jmpq   400700 <_init+0x20>

0000000000400720 <opendir@plt>:
  400720:	ff 25 fa 18 20 00    	jmpq   *0x2018fa(%rip)        # 602020 <_GLOBAL_OFFSET_TABLE_+0x20>
  400726:	68 01 00 00 00       	pushq  $0x1
  40072b:	e9 d0 ff ff ff       	jmpq   400700 <_init+0x20>

0000000000400730 <getpwuid@plt>:
  400730:	ff 25 f2 18 20 00    	jmpq   *0x2018f2(%rip)        # 602028 <_GLOBAL_OFFSET_TABLE_+0x28>
  400736:	68 02 00 00 00       	pushq  $0x2
  40073b:	e9 c0 ff ff ff       	jmpq   400700 <_init+0x20>

0000000000400740 <ctime@plt>:
  400740:	ff 25 ea 18 20 00    	jmpq   *0x2018ea(%rip)        # 602030 <_GLOBAL_OFFSET_TABLE_+0x30>
  400746:	68 03 00 00 00       	pushq  $0x3
  40074b:	e9 b0 ff ff ff       	jmpq   400700 <_init+0x20>

0000000000400750 <__stack_chk_fail@plt>:
  400750:	ff 25 e2 18 20 00    	jmpq   *0x2018e2(%rip)        # 602038 <_GLOBAL_OFFSET_TABLE_+0x38>
  400756:	68 04 00 00 00       	pushq  $0x4
  40075b:	e9 a0 ff ff ff       	jmpq   400700 <_init+0x20>

0000000000400760 <printf@plt>:
  400760:	ff 25 da 18 20 00    	jmpq   *0x2018da(%rip)        # 602040 <_GLOBAL_OFFSET_TABLE_+0x40>
  400766:	68 05 00 00 00       	pushq  $0x5
  40076b:	e9 90 ff ff ff       	jmpq   400700 <_init+0x20>

0000000000400770 <getgrgid@plt>:
  400770:	ff 25 d2 18 20 00    	jmpq   *0x2018d2(%rip)        # 602048 <_GLOBAL_OFFSET_TABLE_+0x48>
  400776:	68 06 00 00 00       	pushq  $0x6
  40077b:	e9 80 ff ff ff       	jmpq   400700 <_init+0x20>

0000000000400780 <closedir@plt>:
  400780:	ff 25 ca 18 20 00    	jmpq   *0x2018ca(%rip)        # 602050 <_GLOBAL_OFFSET_TABLE_+0x50>
  400786:	68 07 00 00 00       	pushq  $0x7
  40078b:	e9 70 ff ff ff       	jmpq   400700 <_init+0x20>

0000000000400790 <__libc_start_main@plt>:
  400790:	ff 25 c2 18 20 00    	jmpq   *0x2018c2(%rip)        # 602058 <_GLOBAL_OFFSET_TABLE_+0x58>
  400796:	68 08 00 00 00       	pushq  $0x8
  40079b:	e9 60 ff ff ff       	jmpq   400700 <_init+0x20>

00000000004007a0 <fprintf@plt>:
  4007a0:	ff 25 ba 18 20 00    	jmpq   *0x2018ba(%rip)        # 602060 <_GLOBAL_OFFSET_TABLE_+0x60>
  4007a6:	68 09 00 00 00       	pushq  $0x9
  4007ab:	e9 50 ff ff ff       	jmpq   400700 <_init+0x20>

00000000004007b0 <__xstat@plt>:
  4007b0:	ff 25 b2 18 20 00    	jmpq   *0x2018b2(%rip)        # 602068 <_GLOBAL_OFFSET_TABLE_+0x68>
  4007b6:	68 0a 00 00 00       	pushq  $0xa
  4007bb:	e9 40 ff ff ff       	jmpq   400700 <_init+0x20>

00000000004007c0 <readdir@plt>:
  4007c0:	ff 25 aa 18 20 00    	jmpq   *0x2018aa(%rip)        # 602070 <_GLOBAL_OFFSET_TABLE_+0x70>
  4007c6:	68 0b 00 00 00       	pushq  $0xb
  4007cb:	e9 30 ff ff ff       	jmpq   400700 <_init+0x20>

00000000004007d0 <perror@plt>:
  4007d0:	ff 25 a2 18 20 00    	jmpq   *0x2018a2(%rip)        # 602078 <_GLOBAL_OFFSET_TABLE_+0x78>
  4007d6:	68 0c 00 00 00       	pushq  $0xc
  4007db:	e9 20 ff ff ff       	jmpq   400700 <_init+0x20>

00000000004007e0 <sprintf@plt>:
  4007e0:	ff 25 9a 18 20 00    	jmpq   *0x20189a(%rip)        # 602080 <_GLOBAL_OFFSET_TABLE_+0x80>
  4007e6:	68 0d 00 00 00       	pushq  $0xd
  4007eb:	e9 10 ff ff ff       	jmpq   400700 <_init+0x20>

Disassembly of section .plt.got:

00000000004007f0 <.plt.got>:
  4007f0:	ff 25 02 18 20 00    	jmpq   *0x201802(%rip)        # 601ff8 <_DYNAMIC+0x1d0>
  4007f6:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000400800 <_start>:
  400800:	31 ed                	xor    %ebp,%ebp
  400802:	49 89 d1             	mov    %rdx,%r9
  400805:	5e                   	pop    %rsi
  400806:	48 89 e2             	mov    %rsp,%rdx
  400809:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40080d:	50                   	push   %rax
  40080e:	54                   	push   %rsp
  40080f:	49 c7 c0 90 0d 40 00 	mov    $0x400d90,%r8
  400816:	48 c7 c1 20 0d 40 00 	mov    $0x400d20,%rcx
  40081d:	48 c7 c7 f6 08 40 00 	mov    $0x4008f6,%rdi
  400824:	e8 67 ff ff ff       	callq  400790 <__libc_start_main@plt>
  400829:	f4                   	hlt    
  40082a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400830 <deregister_tm_clones>:
  400830:	b8 9f 20 60 00       	mov    $0x60209f,%eax
  400835:	55                   	push   %rbp
  400836:	48 2d 98 20 60 00    	sub    $0x602098,%rax
  40083c:	48 83 f8 0e          	cmp    $0xe,%rax
  400840:	48 89 e5             	mov    %rsp,%rbp
  400843:	76 1b                	jbe    400860 <deregister_tm_clones+0x30>
  400845:	b8 00 00 00 00       	mov    $0x0,%eax
  40084a:	48 85 c0             	test   %rax,%rax
  40084d:	74 11                	je     400860 <deregister_tm_clones+0x30>
  40084f:	5d                   	pop    %rbp
  400850:	bf 98 20 60 00       	mov    $0x602098,%edi
  400855:	ff e0                	jmpq   *%rax
  400857:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  40085e:	00 00 
  400860:	5d                   	pop    %rbp
  400861:	c3                   	retq   
  400862:	0f 1f 40 00          	nopl   0x0(%rax)
  400866:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40086d:	00 00 00 

0000000000400870 <register_tm_clones>:
  400870:	be 98 20 60 00       	mov    $0x602098,%esi
  400875:	55                   	push   %rbp
  400876:	48 81 ee 98 20 60 00 	sub    $0x602098,%rsi
  40087d:	48 c1 fe 03          	sar    $0x3,%rsi
  400881:	48 89 e5             	mov    %rsp,%rbp
  400884:	48 89 f0             	mov    %rsi,%rax
  400887:	48 c1 e8 3f          	shr    $0x3f,%rax
  40088b:	48 01 c6             	add    %rax,%rsi
  40088e:	48 d1 fe             	sar    %rsi
  400891:	74 15                	je     4008a8 <register_tm_clones+0x38>
  400893:	b8 00 00 00 00       	mov    $0x0,%eax
  400898:	48 85 c0             	test   %rax,%rax
  40089b:	74 0b                	je     4008a8 <register_tm_clones+0x38>
  40089d:	5d                   	pop    %rbp
  40089e:	bf 98 20 60 00       	mov    $0x602098,%edi
  4008a3:	ff e0                	jmpq   *%rax
  4008a5:	0f 1f 00             	nopl   (%rax)
  4008a8:	5d                   	pop    %rbp
  4008a9:	c3                   	retq   
  4008aa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000004008b0 <__do_global_dtors_aux>:
  4008b0:	80 3d f1 17 20 00 00 	cmpb   $0x0,0x2017f1(%rip)        # 6020a8 <completed.7585>
  4008b7:	75 11                	jne    4008ca <__do_global_dtors_aux+0x1a>
  4008b9:	55                   	push   %rbp
  4008ba:	48 89 e5             	mov    %rsp,%rbp
  4008bd:	e8 6e ff ff ff       	callq  400830 <deregister_tm_clones>
  4008c2:	5d                   	pop    %rbp
  4008c3:	c6 05 de 17 20 00 01 	movb   $0x1,0x2017de(%rip)        # 6020a8 <completed.7585>
  4008ca:	f3 c3                	repz retq 
  4008cc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004008d0 <frame_dummy>:
  4008d0:	bf 20 1e 60 00       	mov    $0x601e20,%edi
  4008d5:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  4008d9:	75 05                	jne    4008e0 <frame_dummy+0x10>
  4008db:	eb 93                	jmp    400870 <register_tm_clones>
  4008dd:	0f 1f 00             	nopl   (%rax)
  4008e0:	b8 00 00 00 00       	mov    $0x0,%eax
  4008e5:	48 85 c0             	test   %rax,%rax
  4008e8:	74 f1                	je     4008db <frame_dummy+0xb>
  4008ea:	55                   	push   %rbp
  4008eb:	48 89 e5             	mov    %rsp,%rbp
  4008ee:	ff d0                	callq  *%rax
  4008f0:	5d                   	pop    %rbp
  4008f1:	e9 7a ff ff ff       	jmpq   400870 <register_tm_clones>

00000000004008f6 <main>:
  4008f6:	55                   	push   %rbp
  4008f7:	48 89 e5             	mov    %rsp,%rbp
  4008fa:	48 83 ec 10          	sub    $0x10,%rsp
  4008fe:	89 7d fc             	mov    %edi,-0x4(%rbp)
  400901:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  400905:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
  400909:	75 39                	jne    400944 <main+0x4e>
  40090b:	bf c0 0d 40 00       	mov    $0x400dc0,%edi
  400910:	e8 40 00 00 00       	callq  400955 <do_ls>
  400915:	eb 37                	jmp    40094e <main+0x58>
  400917:	48 83 45 f0 08       	addq   $0x8,-0x10(%rbp)
  40091c:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400920:	48 8b 00             	mov    (%rax),%rax
  400923:	48 89 c6             	mov    %rax,%rsi
  400926:	bf c2 0d 40 00       	mov    $0x400dc2,%edi
  40092b:	b8 00 00 00 00       	mov    $0x0,%eax
  400930:	e8 2b fe ff ff       	callq  400760 <printf@plt>
  400935:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400939:	48 8b 00             	mov    (%rax),%rax
  40093c:	48 89 c7             	mov    %rax,%rdi
  40093f:	e8 11 00 00 00       	callq  400955 <do_ls>
  400944:	83 6d fc 01          	subl   $0x1,-0x4(%rbp)
  400948:	83 7d fc 00          	cmpl   $0x0,-0x4(%rbp)
  40094c:	75 c9                	jne    400917 <main+0x21>
  40094e:	b8 00 00 00 00       	mov    $0x0,%eax
  400953:	c9                   	leaveq 
  400954:	c3                   	retq   

0000000000400955 <do_ls>:
  400955:	55                   	push   %rbp
  400956:	48 89 e5             	mov    %rsp,%rbp
  400959:	48 83 ec 20          	sub    $0x20,%rsp
  40095d:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  400961:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400965:	48 89 c7             	mov    %rax,%rdi
  400968:	e8 b3 fd ff ff       	callq  400720 <opendir@plt>
  40096d:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  400971:	48 83 7d f0 00       	cmpq   $0x0,-0x10(%rbp)
  400976:	75 2f                	jne    4009a7 <do_ls+0x52>
  400978:	48 8b 05 21 17 20 00 	mov    0x201721(%rip),%rax        # 6020a0 <stderr@@GLIBC_2.2.5>
  40097f:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  400983:	be c7 0d 40 00       	mov    $0x400dc7,%esi
  400988:	48 89 c7             	mov    %rax,%rdi
  40098b:	b8 00 00 00 00       	mov    $0x0,%eax
  400990:	e8 0b fe ff ff       	callq  4007a0 <fprintf@plt>
  400995:	eb 33                	jmp    4009ca <do_ls+0x75>
  400997:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  40099b:	48 83 c0 13          	add    $0x13,%rax
  40099f:	48 89 c7             	mov    %rax,%rdi
  4009a2:	e8 26 00 00 00       	callq  4009cd <dostat>
  4009a7:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4009ab:	48 89 c7             	mov    %rax,%rdi
  4009ae:	e8 0d fe ff ff       	callq  4007c0 <readdir@plt>
  4009b3:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4009b7:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
  4009bc:	75 d9                	jne    400997 <do_ls+0x42>
  4009be:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4009c2:	48 89 c7             	mov    %rax,%rdi
  4009c5:	e8 b6 fd ff ff       	callq  400780 <closedir@plt>
  4009ca:	90                   	nop
  4009cb:	c9                   	leaveq 
  4009cc:	c3                   	retq   

00000000004009cd <dostat>:
  4009cd:	55                   	push   %rbp
  4009ce:	48 89 e5             	mov    %rsp,%rbp
  4009d1:	48 81 ec b0 00 00 00 	sub    $0xb0,%rsp
  4009d8:	48 89 bd 58 ff ff ff 	mov    %rdi,-0xa8(%rbp)
  4009df:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4009e6:	00 00 
  4009e8:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4009ec:	31 c0                	xor    %eax,%eax
  4009ee:	48 8d 95 60 ff ff ff 	lea    -0xa0(%rbp),%rdx
  4009f5:	48 8b 85 58 ff ff ff 	mov    -0xa8(%rbp),%rax
  4009fc:	48 89 d6             	mov    %rdx,%rsi
  4009ff:	48 89 c7             	mov    %rax,%rdi
  400a02:	e8 99 03 00 00       	callq  400da0 <__stat>
  400a07:	83 f8 ff             	cmp    $0xffffffff,%eax
  400a0a:	75 11                	jne    400a1d <dostat+0x50>
  400a0c:	48 8b 85 58 ff ff ff 	mov    -0xa8(%rbp),%rax
  400a13:	48 89 c7             	mov    %rax,%rdi
  400a16:	e8 b5 fd ff ff       	callq  4007d0 <perror@plt>
  400a1b:	eb 19                	jmp    400a36 <dostat+0x69>
  400a1d:	48 8d 95 60 ff ff ff 	lea    -0xa0(%rbp),%rdx
  400a24:	48 8b 85 58 ff ff ff 	mov    -0xa8(%rbp),%rax
  400a2b:	48 89 d6             	mov    %rdx,%rsi
  400a2e:	48 89 c7             	mov    %rax,%rdi
  400a31:	e8 17 00 00 00       	callq  400a4d <show_file_info>
  400a36:	90                   	nop
  400a37:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  400a3b:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  400a42:	00 00 
  400a44:	74 05                	je     400a4b <dostat+0x7e>
  400a46:	e8 05 fd ff ff       	callq  400750 <__stack_chk_fail@plt>
  400a4b:	c9                   	leaveq 
  400a4c:	c3                   	retq   

0000000000400a4d <show_file_info>:
  400a4d:	55                   	push   %rbp
  400a4e:	48 89 e5             	mov    %rsp,%rbp
  400a51:	48 83 ec 30          	sub    $0x30,%rsp
  400a55:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  400a59:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
  400a5d:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  400a64:	00 00 
  400a66:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400a6a:	31 c0                	xor    %eax,%eax
  400a6c:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400a70:	8b 40 18             	mov    0x18(%rax),%eax
  400a73:	89 c2                	mov    %eax,%edx
  400a75:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  400a79:	48 89 c6             	mov    %rax,%rsi
  400a7c:	89 d7                	mov    %edx,%edi
  400a7e:	e8 d2 00 00 00       	callq  400b55 <mode_to_letters>
  400a83:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  400a87:	48 89 c6             	mov    %rax,%rsi
  400a8a:	bf dc 0d 40 00       	mov    $0x400ddc,%edi
  400a8f:	b8 00 00 00 00       	mov    $0x0,%eax
  400a94:	e8 c7 fc ff ff       	callq  400760 <printf@plt>
  400a99:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400a9d:	48 8b 40 10          	mov    0x10(%rax),%rax
  400aa1:	89 c6                	mov    %eax,%esi
  400aa3:	bf df 0d 40 00       	mov    $0x400ddf,%edi
  400aa8:	b8 00 00 00 00       	mov    $0x0,%eax
  400aad:	e8 ae fc ff ff       	callq  400760 <printf@plt>
  400ab2:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400ab6:	8b 40 1c             	mov    0x1c(%rax),%eax
  400ab9:	89 c7                	mov    %eax,%edi
  400abb:	e8 c1 01 00 00       	callq  400c81 <uid_to_name>
  400ac0:	48 89 c6             	mov    %rax,%rsi
  400ac3:	bf e3 0d 40 00       	mov    $0x400de3,%edi
  400ac8:	b8 00 00 00 00       	mov    $0x0,%eax
  400acd:	e8 8e fc ff ff       	callq  400760 <printf@plt>
  400ad2:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400ad6:	8b 40 20             	mov    0x20(%rax),%eax
  400ad9:	89 c7                	mov    %eax,%edi
  400adb:	e8 ea 01 00 00       	callq  400cca <gid_to_name>
  400ae0:	48 89 c6             	mov    %rax,%rsi
  400ae3:	bf e3 0d 40 00       	mov    $0x400de3,%edi
  400ae8:	b8 00 00 00 00       	mov    $0x0,%eax
  400aed:	e8 6e fc ff ff       	callq  400760 <printf@plt>
  400af2:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400af6:	48 8b 40 30          	mov    0x30(%rax),%rax
  400afa:	48 89 c6             	mov    %rax,%rsi
  400afd:	bf e8 0d 40 00       	mov    $0x400de8,%edi
  400b02:	b8 00 00 00 00       	mov    $0x0,%eax
  400b07:	e8 54 fc ff ff       	callq  400760 <printf@plt>
  400b0c:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400b10:	48 83 c0 58          	add    $0x58,%rax
  400b14:	48 89 c7             	mov    %rax,%rdi
  400b17:	b8 00 00 00 00       	mov    $0x0,%eax
  400b1c:	e8 1f fc ff ff       	callq  400740 <ctime@plt>
  400b21:	89 c6                	mov    %eax,%esi
  400b23:	bf ed 0d 40 00       	mov    $0x400ded,%edi
  400b28:	b8 00 00 00 00       	mov    $0x0,%eax
  400b2d:	e8 2e fc ff ff       	callq  400760 <printf@plt>
  400b32:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  400b36:	48 89 c7             	mov    %rax,%rdi
  400b39:	e8 d2 fb ff ff       	callq  400710 <puts@plt>
  400b3e:	90                   	nop
  400b3f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  400b43:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  400b4a:	00 00 
  400b4c:	74 05                	je     400b53 <show_file_info+0x106>
  400b4e:	e8 fd fb ff ff       	callq  400750 <__stack_chk_fail@plt>
  400b53:	c9                   	leaveq 
  400b54:	c3                   	retq   

0000000000400b55 <mode_to_letters>:
  400b55:	55                   	push   %rbp
  400b56:	48 89 e5             	mov    %rsp,%rbp
  400b59:	89 7d fc             	mov    %edi,-0x4(%rbp)
  400b5c:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  400b60:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400b64:	48 ba 2d 2d 2d 2d 2d 	movabs $0x2d2d2d2d2d2d2d2d,%rdx
  400b6b:	2d 2d 2d 
  400b6e:	48 89 10             	mov    %rdx,(%rax)
  400b71:	66 c7 40 08 2d 2d    	movw   $0x2d2d,0x8(%rax)
  400b77:	c6 40 0a 00          	movb   $0x0,0xa(%rax)
  400b7b:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400b7e:	25 00 f0 00 00       	and    $0xf000,%eax
  400b83:	3d 00 40 00 00       	cmp    $0x4000,%eax
  400b88:	75 07                	jne    400b91 <mode_to_letters+0x3c>
  400b8a:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400b8e:	c6 00 64             	movb   $0x64,(%rax)
  400b91:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400b94:	25 00 f0 00 00       	and    $0xf000,%eax
  400b99:	3d 00 20 00 00       	cmp    $0x2000,%eax
  400b9e:	75 07                	jne    400ba7 <mode_to_letters+0x52>
  400ba0:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400ba4:	c6 00 63             	movb   $0x63,(%rax)
  400ba7:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400baa:	25 00 f0 00 00       	and    $0xf000,%eax
  400baf:	3d 00 60 00 00       	cmp    $0x6000,%eax
  400bb4:	75 07                	jne    400bbd <mode_to_letters+0x68>
  400bb6:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400bba:	c6 00 62             	movb   $0x62,(%rax)
  400bbd:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400bc0:	25 00 01 00 00       	and    $0x100,%eax
  400bc5:	85 c0                	test   %eax,%eax
  400bc7:	74 0b                	je     400bd4 <mode_to_letters+0x7f>
  400bc9:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400bcd:	48 83 c0 01          	add    $0x1,%rax
  400bd1:	c6 00 72             	movb   $0x72,(%rax)
  400bd4:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400bd7:	25 80 00 00 00       	and    $0x80,%eax
  400bdc:	85 c0                	test   %eax,%eax
  400bde:	74 0b                	je     400beb <mode_to_letters+0x96>
  400be0:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400be4:	48 83 c0 02          	add    $0x2,%rax
  400be8:	c6 00 77             	movb   $0x77,(%rax)
  400beb:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400bee:	83 e0 40             	and    $0x40,%eax
  400bf1:	85 c0                	test   %eax,%eax
  400bf3:	74 0b                	je     400c00 <mode_to_letters+0xab>
  400bf5:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400bf9:	48 83 c0 03          	add    $0x3,%rax
  400bfd:	c6 00 78             	movb   $0x78,(%rax)
  400c00:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400c03:	83 e0 20             	and    $0x20,%eax
  400c06:	85 c0                	test   %eax,%eax
  400c08:	74 0b                	je     400c15 <mode_to_letters+0xc0>
  400c0a:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400c0e:	48 83 c0 01          	add    $0x1,%rax
  400c12:	c6 00 72             	movb   $0x72,(%rax)
  400c15:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400c18:	83 e0 10             	and    $0x10,%eax
  400c1b:	85 c0                	test   %eax,%eax
  400c1d:	74 0b                	je     400c2a <mode_to_letters+0xd5>
  400c1f:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400c23:	48 83 c0 02          	add    $0x2,%rax
  400c27:	c6 00 77             	movb   $0x77,(%rax)
  400c2a:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400c2d:	83 e0 08             	and    $0x8,%eax
  400c30:	85 c0                	test   %eax,%eax
  400c32:	74 0b                	je     400c3f <mode_to_letters+0xea>
  400c34:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400c38:	48 83 c0 03          	add    $0x3,%rax
  400c3c:	c6 00 78             	movb   $0x78,(%rax)
  400c3f:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400c42:	83 e0 04             	and    $0x4,%eax
  400c45:	85 c0                	test   %eax,%eax
  400c47:	74 0b                	je     400c54 <mode_to_letters+0xff>
  400c49:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400c4d:	48 83 c0 01          	add    $0x1,%rax
  400c51:	c6 00 72             	movb   $0x72,(%rax)
  400c54:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400c57:	83 e0 02             	and    $0x2,%eax
  400c5a:	85 c0                	test   %eax,%eax
  400c5c:	74 0b                	je     400c69 <mode_to_letters+0x114>
  400c5e:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400c62:	48 83 c0 02          	add    $0x2,%rax
  400c66:	c6 00 77             	movb   $0x77,(%rax)
  400c69:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400c6c:	83 e0 01             	and    $0x1,%eax
  400c6f:	85 c0                	test   %eax,%eax
  400c71:	74 0b                	je     400c7e <mode_to_letters+0x129>
  400c73:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  400c77:	48 83 c0 03          	add    $0x3,%rax
  400c7b:	c6 00 78             	movb   $0x78,(%rax)
  400c7e:	90                   	nop
  400c7f:	5d                   	pop    %rbp
  400c80:	c3                   	retq   

0000000000400c81 <uid_to_name>:
  400c81:	55                   	push   %rbp
  400c82:	48 89 e5             	mov    %rsp,%rbp
  400c85:	48 83 ec 20          	sub    $0x20,%rsp
  400c89:	89 7d ec             	mov    %edi,-0x14(%rbp)
  400c8c:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400c8f:	89 c7                	mov    %eax,%edi
  400c91:	e8 9a fa ff ff       	callq  400730 <getpwuid@plt>
  400c96:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400c9a:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
  400c9f:	75 20                	jne    400cc1 <uid_to_name+0x40>
  400ca1:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400ca4:	89 c2                	mov    %eax,%edx
  400ca6:	be f3 0d 40 00       	mov    $0x400df3,%esi
  400cab:	bf b0 20 60 00       	mov    $0x6020b0,%edi
  400cb0:	b8 00 00 00 00       	mov    $0x0,%eax
  400cb5:	e8 26 fb ff ff       	callq  4007e0 <sprintf@plt>
  400cba:	b8 b0 20 60 00       	mov    $0x6020b0,%eax
  400cbf:	eb 07                	jmp    400cc8 <uid_to_name+0x47>
  400cc1:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  400cc5:	48 8b 00             	mov    (%rax),%rax
  400cc8:	c9                   	leaveq 
  400cc9:	c3                   	retq   

0000000000400cca <gid_to_name>:
  400cca:	55                   	push   %rbp
  400ccb:	48 89 e5             	mov    %rsp,%rbp
  400cce:	48 83 ec 20          	sub    $0x20,%rsp
  400cd2:	89 7d ec             	mov    %edi,-0x14(%rbp)
  400cd5:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400cd8:	89 c7                	mov    %eax,%edi
  400cda:	e8 91 fa ff ff       	callq  400770 <getgrgid@plt>
  400cdf:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400ce3:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
  400ce8:	75 20                	jne    400d0a <gid_to_name+0x40>
  400cea:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400ced:	89 c2                	mov    %eax,%edx
  400cef:	be f3 0d 40 00       	mov    $0x400df3,%esi
  400cf4:	bf c0 20 60 00       	mov    $0x6020c0,%edi
  400cf9:	b8 00 00 00 00       	mov    $0x0,%eax
  400cfe:	e8 dd fa ff ff       	callq  4007e0 <sprintf@plt>
  400d03:	b8 c0 20 60 00       	mov    $0x6020c0,%eax
  400d08:	eb 07                	jmp    400d11 <gid_to_name+0x47>
  400d0a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  400d0e:	48 8b 00             	mov    (%rax),%rax
  400d11:	c9                   	leaveq 
  400d12:	c3                   	retq   
  400d13:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400d1a:	00 00 00 
  400d1d:	0f 1f 00             	nopl   (%rax)

0000000000400d20 <__libc_csu_init>:
  400d20:	41 57                	push   %r15
  400d22:	41 56                	push   %r14
  400d24:	41 89 ff             	mov    %edi,%r15d
  400d27:	41 55                	push   %r13
  400d29:	41 54                	push   %r12
  400d2b:	4c 8d 25 de 10 20 00 	lea    0x2010de(%rip),%r12        # 601e10 <__frame_dummy_init_array_entry>
  400d32:	55                   	push   %rbp
  400d33:	48 8d 2d de 10 20 00 	lea    0x2010de(%rip),%rbp        # 601e18 <__init_array_end>
  400d3a:	53                   	push   %rbx
  400d3b:	49 89 f6             	mov    %rsi,%r14
  400d3e:	49 89 d5             	mov    %rdx,%r13
  400d41:	4c 29 e5             	sub    %r12,%rbp
  400d44:	48 83 ec 08          	sub    $0x8,%rsp
  400d48:	48 c1 fd 03          	sar    $0x3,%rbp
  400d4c:	e8 8f f9 ff ff       	callq  4006e0 <_init>
  400d51:	48 85 ed             	test   %rbp,%rbp
  400d54:	74 20                	je     400d76 <__libc_csu_init+0x56>
  400d56:	31 db                	xor    %ebx,%ebx
  400d58:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  400d5f:	00 
  400d60:	4c 89 ea             	mov    %r13,%rdx
  400d63:	4c 89 f6             	mov    %r14,%rsi
  400d66:	44 89 ff             	mov    %r15d,%edi
  400d69:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  400d6d:	48 83 c3 01          	add    $0x1,%rbx
  400d71:	48 39 eb             	cmp    %rbp,%rbx
  400d74:	75 ea                	jne    400d60 <__libc_csu_init+0x40>
  400d76:	48 83 c4 08          	add    $0x8,%rsp
  400d7a:	5b                   	pop    %rbx
  400d7b:	5d                   	pop    %rbp
  400d7c:	41 5c                	pop    %r12
  400d7e:	41 5d                	pop    %r13
  400d80:	41 5e                	pop    %r14
  400d82:	41 5f                	pop    %r15
  400d84:	c3                   	retq   
  400d85:	90                   	nop
  400d86:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400d8d:	00 00 00 

0000000000400d90 <__libc_csu_fini>:
  400d90:	f3 c3                	repz retq 
  400d92:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400d99:	00 00 00 
  400d9c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400da0 <__stat>:
  400da0:	48 89 f2             	mov    %rsi,%rdx
  400da3:	48 89 fe             	mov    %rdi,%rsi
  400da6:	bf 01 00 00 00       	mov    $0x1,%edi
  400dab:	e9 00 fa ff ff       	jmpq   4007b0 <__xstat@plt>

Disassembly of section .fini:

0000000000400db0 <_fini>:
  400db0:	48 83 ec 08          	sub    $0x8,%rsp
  400db4:	48 83 c4 08          	add    $0x8,%rsp
  400db8:	c3                   	retq   
